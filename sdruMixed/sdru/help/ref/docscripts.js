    
        
// Toggle a division as expanded or collapsed.
// Also toggle the arrow icon.
// Refer to the division and image by their IDs.
//
// "Collapsed" material is hidden using the
// display property in CSS.

// Used by adaptproduct function (see below)
// to support adaptive doc in the Windows
// version of the Help Browser.
var adaptiveIds = new Array();
function toggleexpander(blockid, arrowid) {
    arrow = document.getElementById(arrowid);
    block = document.getElementById(blockid);
    if (block.style.display == "none") {
        // Currently collapsed, so expand it.
        block.style.display = "block";
        arrow.src = "arrow_down.gif";
        arrow.alt = "Click to Collapse";
    }
    else {
        // Currently expanded, so collapse it.
        block.style.display = "none";
        arrow.src = "arrow_right.gif";
        arrow.alt = "Click to Expand";
    }
    return false; // Make browser ignore href.
}

// ===================================================
// Adapt doc content based on installed licenses. 
// Refer to the div or span by its ID.
//
// This code supports both the Unix version of
// the Help Browser, which supports LiveConnect (i.e.,
// JavaScript<->Java interaction, and the Windows
// version, which does not support LiveConnect but does
// support a MathWorks-specific feature intended to support
// adaptive doc. Specifically, when
// the Windows version loads an HTML page, it checks
// whether the page defines a variable adaptiveDocPresent
// with a value of true. If the page defines the variable,
// the Help Browser invokes the function doAdaptiveDoc (see
// below) when the page has finished loading to show or hide 
// adaptive sections.
function adaptproduct(license, id) {

    try {
        // Works only if the Help Browser supports LiveConnect, i.e.,
        // the Unix version.
        if (!Packages.com.mathworks.mlservices.MLLicenseChecker.hasLicense(license)) {
            thisel = document.getElementById(id);
            thisel.style.display = 'none';
        }
        ;
    } catch (e) {
        // Help Browser does not support Live Connect. Assume
        // that it supports doAdaptiveDoc and save the license
        // and adaptive element id for use by doAdaptiveDoc.
        adaptiveIds[adaptiveIds.length] = license + '|' + id;
    }

}

// ===================================================
// Invoked by the Windows version of the Help Browser if 
// the page being displayed sets
//
//   adaptiveDocPresent = true
//
// Products is a list of the product licenses owned by the
// user.
function doAdaptiveDoc(products) {
    for (i = 0; i < adaptiveIds.length; i++) {
        adaptiveInfo = adaptiveIds[i].split('|');
        if (products.indexOf(adaptiveInfo[0]) < 0) {
            thisel = document.getElementById(adaptiveInfo[1]);
            thisel.style.display = 'none';
        }
    }
}

// ===================================================
// Create and uniquely name two levels of upward navigation buttons
// for Functions -- By Category pages

var top_button_count = 0;
var current_section_id = 0;

function addTopOfPageButtons() {

    top_button_count = top_button_count + 1;

    var top_of_page_buttons =

        "<a class=\"pagenavimglink\" href=\"#top_of_page\" onMouseOver=\"document.images.uparrow" +
            top_button_count +
            ".src=\'doc_to_top_down.gif\'\;\" onMouseOut=\"document.images.uparrow" +
            top_button_count +
            ".src=\'doc_to_top_up.gif\'\;\"><img style=\"margin-top:0;margin-bottom:0px;padding-top:0;padding-bottom:0\" border=0 src=\"doc_to_top_up.gif\"  alt=\"Back to Top of Page\" title=\"Back to Top of Page\" name=\"uparrow" +
            top_button_count +
            "\">\&nbsp\;</a>";

    document.write(top_of_page_buttons);
}


function updateSectionId(id) {
    current_section_id = id;
}


function addTopOfSectionButtons() {

    top_button_count = top_button_count + 1;

    var top_of_page_buttons =

        "<a class=\"pagenavimglink\" href=" +
            "\"#" + current_section_id + "\"" +
            " onMouseOver=\"document.images.uparrow" +
            top_button_count +
            ".src=\'doc_to_section_down.gif\'\;\" onMouseOut=\"document.images.uparrow" +
            top_button_count +
            ".src=\'doc_to_section_up.gif\'\;\"><img style=\"margin-top:0;margin-bottom:0px;padding-top:0;padding-bottom:0\" border=0 src=\"doc_to_section_up.gif\"  alt=\"Back to Top of Section\" title=\"Back to Top of Section\" name=\"uparrow" +
            top_button_count +
            "\">\&nbsp\;</a>";

    document.write(top_of_page_buttons);
}

// ===================================================
// Create and write to the document stream HTML for 
// the link to the Doc Feedback Survey site.
//
// Doing this through a JavaScript function is necessary
// to work around the an issue with pages that are found
// through the search facility of the help browser--
//
// When found as the result of a search, 
// the document that is displayed in the Help browser
// is actually a temporary document with a trivial URL
// such as "text://5", not an actual page location.
//
// But the Help browser inserts a <BASE> element at the beginning
// of each such temporary page, and the <BASE> element stores the
// actual location. 
//
// So this function tests the URL of the document for the expression "text://"
// and if that expression is found, attempts to use the URL stored in
// the <BASE> element.

function writeDocFeedbackSurveyLink() {
    var queryexpression = document.location.href;
    var istempsearchpage = false;

    if (queryexpression.indexOf("help/ja_JP/") >= 0) {
        // Japanese
        str_yes = "&#x306f;&#x3044;";
        str_no = "&#x3044;&#x3044;&#x3048;";
        str_helpful = "<span style=\"font-size:1.2em\">&#x3053;&#x306e;&#x60c5;&#x5831;&#x306f;&#x5f79;&#x306b;&#x7acb;&#x3061;&#x307e;&#x3057;&#x305f;&#x304b;&#xff1f;</span>";
    }
	else if (queryexpression.indexOf("help/zh_CN/") >= 0) {
        // Chinese
        str_yes = "&#x662F;";
        str_no = "&#x5426;";
        str_helpful = "<span style=\"font-size:1.2em\">&#x8FD9;&#x91CC;&#x7684;&#x8BAE;&#x9898;&#x5BF9;&#x4F60;&#x6709;&#x5E2E;&#x52A9;&#x5417;&#xFF1F;</span>";
    }
    else {
        // Default to English
        str_yes = "Yes";
        str_no = "No";
        str_helpful = "Was this topic helpful?";
    }
    ;

    if (queryexpression.search(/text:\/\//) != -1) {
        var baseelement = document.getElementsByTagName("BASE")[0];
        queryexpression = baseelement.href;
    }
    survey_url_yes = "http://www.customersat3.com/TakeSurvey.asp?si=YU2FDmNEifg%3D&SF=" + queryexpression + "-YES";
    survey_url_no = "http://www.customersat3.com/TakeSurvey.asp?si=YU2FDmNEifg%3D&SF=" + queryexpression + "-NO";

    code = '<div style="padding-right:10px" class="feedbackblock">' + '<strong>' + str_helpful + '</strong> <input type="button" value="' + str_yes + '" onClick="openWindow(\'' + survey_url_yes + '\',850,680, \'scrollbars=yes,resizable=yes\'); return false;"/>' + '&nbsp;&nbsp;' + '<input type="button" value="' + str_no + '" onClick="openWindow(\'' + survey_url_no + '\',850,680, \'scrollbars=yes,resizable=yes\'); return false;"/>' + '</div>';
    document.write(code);
}


// Utility function replacing openWindow function used by the web-site survey link code.
// In the help browser, the original code would create a blank window before loading the URL into the system browser.
function openWindow(url, width, height, options, name) {
    // ignore the arguments, except url
    document.location = url;
} // end function openWindow



// ===================================================
// Workaround for G801125.
// This global object check tests for IE8 or lower.
if (document.all && !document.getElementsByClassName) {
   document.createElement("section");
}



// ===================================================
// Function reference pages

$(document).ready(function () {

$('.expandAllLink').click(function(e) {
        e.stopPropagation();
        var link = $(this);
        if (link.data('allexpanded')) {
            doCollapse(link);
            link.data('allexpanded', false);
            link.html('expand all');
        } else {
            doExpand(link);
            link.data('allexpanded', true);
            link.html('collapse all');
        }
    });

    $('.expand').click(function(e) {
        e.stopPropagation();
        doToggle($(this));
    });

    $('#expand_page').click(function () {
        var link = $(this).find('a');
        if (link.data('allexpanded')) {
            doCollapse($('.collapse'));
            link.data('allexpanded', false);
            link.html('expand all');
        } else {
            doExpand($('.collapse'));
            link.data('allexpanded', true);
            link.html('collapse all');
        }
    });

    //Check image sizes
    $('#doc_center_content img:not(".animated-image"), #content_container2 img:not(".animated-image")').each(function () {
        checkImage($(this));
    });

    $('#doc_center_content img.animated-image, #content_container2 img.animated-image').each(function () {
        checkAnimatedImage($(this));
    });


    var tocUrl = $(".toc_icon a:first").attr('href');
    $(".toc_icon:first").data({
        "tocUrl":tocUrl
    });
    $(".toc_icon a:first").remove();

    //Bind first click on toc_icon to fetch the toc contents.
    //Bind all subsequent clicks to toggle to the TOC.
    $(".toc_icon").one('click', function (e) {
        e.stopPropagation();
        setupToc();
        $(this).click(function (evt) {
            evt.stopPropagation();
            var tocEl = $('div.toc_container_wrapper:first');
            toggleToc(tocEl);
        });
    });

    addSmoothScroll();
    checkBreadcrumb();
    $(window).resize(function () {
        setTocSize($(".toc_container_wrapper:first"));
        resizeBreadcrumb();
    });
});

function resizeBreadcrumb() {
    var breadcrumb = getBreadcrumb();
    var oldbreadcrumbWidth = breadcrumb.data('width');
    $('.breadcrumbs_outer').css('width', 'auto');
    var currentBreadcrumbWidth = breadcrumb.width();
    if (oldbreadcrumbWidth < currentBreadcrumbWidth) {
        checkAndExpandBreadCrumb(breadcrumb);
    } else if (oldbreadcrumbWidth > currentBreadcrumbWidth) {
        checkAndCollapseBreadCrumb(breadcrumb);
    }
    breadcrumb.data('width', currentBreadcrumbWidth);
    $('.breadcrumbs_outer').width(currentBreadcrumbWidth - 3);
}

function checkAndCollapseBreadCrumb(breadcrumb) {
    var availableBreadcrumbWidth = breadcrumb.width();
    var collapsibleBreadcrumbChildren = $(".breadcrumbs_collapsed:last").nextAll();
    if (collapsibleBreadcrumbChildren.length === 0) {
        collapsibleBreadcrumbChildren = $(".breadcrumbs_inner ul li:gt(1)");
    }

    collapsibleBreadcrumbChildren.each(function (i, elem) {
        var actualBreadcrumbWidth = breadcrumb.children().width();
        if (actualBreadcrumbWidth <= availableBreadcrumbWidth) {
            return false;
        }
        collapseBreadcrumbElement($(elem));
    });
}

function checkAndExpandBreadCrumb(breadcrumb) {
    var availableBreadcrumbWidth = breadcrumb.width();
    var expandableBreadcrumbChildren = $($(".breadcrumbs_collapsed").get().reverse());
    expandableBreadcrumbChildren.each(function (i, elem) {
        expandBreadcrumbElement($(elem));
        var actualBreadcrumbWidth = breadcrumb.children().width();
        if (actualBreadcrumbWidth > availableBreadcrumbWidth) {
            collapseBreadcrumbElement($(elem));
            return false;
        }
    });
}

function expandBreadcrumbElement(elem) {
    //Save original width and text of breadcrumb
    var innerSpan = elem.find('span');
    innerSpan.text(innerSpan.data('text'));
    elem.css('width', 'auto');
    elem.removeClass('breadcrumbs_collapsed');
    elem.unbind('mouseenter.breadcrumb mouseleave.breadcrumb');
}

function checkBreadcrumb() {
    var breadcrumb = getBreadcrumb();
    processBreadcrumb(breadcrumb);

    checkAndCollapseBreadCrumb(breadcrumb);

    var availableBreadcrumbWidth = breadcrumb.width();
    breadcrumb.data('width', availableBreadcrumbWidth);
    $(".breadcrumbs_outer").width(availableBreadcrumbWidth - 3);
}

function getBreadcrumb() {
    var breadcrumb;
    if ($("#breadcrumbs").length != 0) {
        breadcrumb = $("#breadcrumbs");
    } else {
        breadcrumb = $(".breadcrumbs:first");
    }
    return breadcrumb;
}

function processBreadcrumb(breadcrumb) {
    //Add classes to first and last elements in the breadcrumb.
    breadcrumb.find('li:first').addClass('breadcrumb_first');
    breadcrumb.find('li:eq(1)').addClass('breadcrumb_product');
    breadcrumb.find('li:last').addClass('breadcrumb_last');

    var children = breadcrumb.children();
    breadcrumb.append($('<div class="breadcrumbs_outer"></div>'));
    $(".breadcrumbs_outer").append($('<div class="breadcrumbs_inner"></div>'));
    $(".breadcrumbs_inner").append(children.remove());
}

function collapseBreadcrumbElement(elem) {
    if (elem.hasClass('breadcrumbs_collapsed')) {
        return;
    }
    //Save original width and text of breadcrumb
    var actualWidth = elem.width() + 7 //account for negative padding;
    elem.data({width: actualWidth});
    var innerSpan = elem.find('span');
    innerSpan.data({text: innerSpan.text()});

    //collapse breadcrumb
    elem.css({'width': '20px', 'overflow':'hidden', 'white-space': 'nowrap', 'display': 'inline-block'});
    innerSpan.text("...");

    elem.addClass('breadcrumbs_collapsed');

    //add hover event handler for collapsed breadcrumb
    addBreadcrumbEventHandler(elem);
}

function addBreadcrumbEventHandler(elem) {

    elem.bind('mouseenter.breadcrumb',
        function() {
            var span = $(this).find('span');
            span.text(span.data('text'));
            $(this).stop();
            $(this).animate({
                width: $(this).data('width')
            });
            return false;
        }).bind('mouseleave.breadcrumb', function() {
            var span = $(this).find('span');
            $(this).stop();
            $(this).animate({
                width: 20
            }, function () {
                span.text("...");
            });
            return false;
        });
}

function addSmoothScroll() {
    $(".intrnllnk").each(function() {
        var hash = this.hash;
        var target = getInternalLinkTarget(hash);
        if (target) {
            $(this).click(function (evt) {
                evt.preventDefault();
                var nextSibling = target.next();
                if (nextSibling.hasClass('expand')) {
                    doExpandParent(nextSibling);
                }
                //On IE and FF, the slow scroll parameter is the HTML dom element. On webkit, it is the body.
                var scrollParameter = ($.browser.msie || $.browser.mozilla) ? 'html' : 'body';
                $(scrollParameter).animate({scrollTop:target.offset().top - 10}, 700, function () {
                    nextSibling.addClass('anchor_hinting');
                    setTimeout(function () {
                        nextSibling.removeClass('anchor_hinting');
                    }, 600);
                    if (nextSibling.hasClass('expand')) {
                        doExpand(nextSibling);
                    }
                });
                location.hash = hash;
            })
        }
    });
}


function getInternalLinkTarget(hash) {
    //search for anchor with given hash as "name" atrribute value;
    var target = null;
    target = $('[name=' + hash.substring(1) + ']');
    //If no target is found, try to find an element whose id has value = hash.
    if (target.length === 0) {
        target = $(hash);
    }
    return target;
}

function setupToc() {
    var tocEl = getTocEl();
    $(".toc_icon").after(tocEl);
    var moreEl = $('<div class="progress_bar"></div>');
    tocEl.find('.toc_container').append(moreEl);
    toggleToc(tocEl);

    setTimeout(function () {
        $.get(getTocUrl(), function (data) {
            var tocContents = $(data).filter("div.toc_container_wrapper").html();
            moreEl.fadeOut(500, function () {
                moreEl.remove();
            });
            tocEl.find('.toc_container').html(tocContents);
            addTocHandlers(tocEl);
            expandToc(tocEl);
        });
    }, 500);
}

function expandToc(tocEl) {
    tocEl.find('li:first').addClass('toc_expanded').removeClass('toc_collapsed');
    tocEl.find(getTocPageId() + ":first").addClass("current_page").parents('li').removeClass('toc_collapsed').addClass('toc_expanded');
}

function getTocEl() {
    var toc_container_wrapper = $('<div class="toc_container_wrapper" style="display:none;"></div>');
    var toc_container_header = $('<div class="toc_container_header">Contents<div class="toc_close_icon"></div></div>');
    var toc_container = $('<div class="toc_container"></div>');
    toc_container_wrapper.append(toc_container_header).append(toc_container);
    setTocSize(toc_container_wrapper);
    return toc_container_wrapper;
}

function setTocSize(toc_container_wrapper) {
    if (toc_container_wrapper) {
        toc_container_wrapper.width($('#docsearch').outerWidth());
        toc_container_wrapper.find('.toc_container:first').css('max-height', ($(window).height() * (2 / 3)) + 'px');
    }
}

function addTocHandlers(tocEl) {
    tocEl.delegate('div.img_wrapper', 'click', function (e) {
        e.stopPropagation();
        toggleTocListEl($(this).closest('li'));
    });

    tocEl.delegate('div.text_wrapper', 'click', function (e) {
        e.stopPropagation();
        if ($(this).find('a').length > 0) {
            document.location = getTocBaseUrl() + $(this).children('a').attr('href');
            return false;
        }
        toggleTocListEl($(this).closest('li'));
    });

    tocEl.delegate('div.text_wrapper', 'hover', function (e) {
        if (e.type === 'mouseover' || e.type === 'mouseenter') {
            $(this).addClass('hovering');
            if ($(this).find('a').length > 0) {
                return;
            }
            var liParent = $(this).closest('li');
            if (liParent.hasClass('toc_expanded') || liParent.hasClass('toc_collapsed')) {
                $(this).prev('div.img_wrapper').addClass('hovering');
            }
        } else {
            $(this).parent().children().removeClass('hovering');
        }
    });

    tocEl.delegate('div.img_wrapper', 'hover', function (e) {
        if (e.type === 'mouseover' || e.type === 'mouseenter') {
            var liParent = $(this).closest('li');

            if (liParent.hasClass('toc_expanded') || liParent.hasClass('toc_collapsed')) {
                $(this).addClass('hovering');
            }
            if ($(this).next('div.text_wrapper').find('a').length === 0) {
                $(this).next('div.text_wrapper').addClass('hovering');
            }
        } else {
            $(this).parent().children().removeClass('hovering');
        }
    });

    tocEl.delegate('div.toc_container', 'click', function (e) {
        e.stopPropagation();
    });

    tocEl.find('div.toc_close_icon').click(function (e) {
        e.stopPropagation();
        toggleToc(tocEl);
    });

    tocEl.find('div.toc_container_header').click(function (e) {
        e.stopPropagation();
    });
}

function toggleToc(tocEl) {
    if (tocEl.is(":visible")) {
        setTimeout(function () {
            tocEl.data({tocHeight:tocEl.height()})
        }, 0);
        tocEl.hide();
    } else {
        if (tocEl.data('tocHeight')) {
            var h = tocEl.data('tocHeight');
            tocEl.height(0);
            tocEl.css('display', 'block');
            tocEl.animate({height:h + 'px'}, function () {
                tocEl.css('height', 'auto');
            });
        } else {
            tocEl.slideDown('fast');
        }
    }
}

function toggleTocListEl(liEl) {
    if (liEl.hasClass('toc_expanded')) {
        liEl.children('ul').slideUp('fast', function () {
            liEl.removeClass('toc_expanded').addClass('toc_collapsed');
        });
    } else if (liEl.hasClass('toc_collapsed')) {
        liEl.children('ul').slideDown('fast', function () {
            liEl.removeClass('toc_collapsed').addClass('toc_expanded');
        });
    }
}
function getTocUrl () {
    return $('.toc_icon:first').data('tocUrl');
}

function getTocPageId() {
    var pathArray = ($(location).attr('pathname') + $(location).attr('href')).replace(/\/$/,'').split("/");
    var productDir = $(".toc_icon").attr("id").replace(/^toc\./,'');
    var reversePathArray = $(pathArray).get().reverse();
    var productDirIndex = $.inArray(productDir, reversePathArray);
    var pageId = "";
    if (productDirIndex === 0) {
        pageId = productDir + ".index.html";
    } else {
        productDirIndex = pathArray.length - productDirIndex - 1;
        pathArray.splice(0, productDirIndex);
        pageId =  pathArray.join(".");
    }
    return "#" + pageId.replace(/\./g, '\\.').replace(/\#/g, '\\#');
}

//Get teh correct base URL for the TOC links, based on the current page.
function getTocBaseUrl() {
    var tocUrl = getTocUrl();
    return tocUrl.substring(tocUrl,tocUrl.indexOf("doccentertoc.html"));
}

function checkAnimatedImage(imgElt) {
    imgElt.data('src', imgElt.attr('src'));
    imgElt.click(toggleImageAnimation);
}

function checkImage(imgElt) {
    //callback to be executed when image loads
    var callback = function () {
        if (needsScaling(imgElt)) {
            imgElt.addClass('scaled-image');
            imgElt.click(toggleImageScaling);
        }
    };
    //Preload image.
    loadImage(imgElt, callback);
}

function loadImage(imgElt, callback) {
    var img = new Image();
    img.onload = function () {
        imgElt.data('fullsize', {
            'width':img.width,
            'height':img.height
        });
        callback();
    };
    img.src = imgElt.attr('src');
}


function needsScaling(imgElt) {
    var fullSize = imgElt.data('fullsize');
    //Vary width and height values here to change scaling parameters.
    return fullSize.width > 480 || fullSize.height > 330;
}

function toggleImageAnimation() {
    var imgElt = $(this);
    if (imgElt.hasClass('dynamic-image')) {
        //swap in the static image
        imgElt.attr('src', imgElt.data('src'));
        imgElt.removeClass('dynamic-image');
        imgElt.attr('title', 'Play');
    } else {
        //swap in the animated image.
        var anm_prefix = "_anmtd_";
        var anm_suffix = ".gif";
        var anm_src = anm_prefix + imgElt.data('src').split('.')[0] + anm_suffix;
        imgElt.attr('src', anm_src);
        imgElt.addClass('dynamic-image');
        imgElt.attr('title', 'Stop');
    }
}

//Setup image scaling.
function toggleImageScaling() {
    var imgElt = $(this);
    if (imgElt.hasClass('expanded-image')) {
        imgElt.animate({
            'max-width':'400px',
            'max-height':'300px'
        }, function () {
            imgElt.removeClass('expanded-image');
        });
    } else {
        var fullSize = imgElt.data('fullsize');
        imgElt.animate({
            'max-width':fullSize.width + 'px',
            'max-height':fullSize.height + 'px'
        }, function () {
            imgElt.addClass('expanded-image');
        });
    }
}

function findExpandableContent(elt) {
    if (!elt.hasClass('expandableContent')) {
        elt = elt.closest('.expandableContent');
    }
    return elt;
}

function doExpand(elt) {
    var expandable = findExpandableContent(elt);
    expandable.find('.collapse').slideDown(function () {
        expandable.find('.expand').addClass('expanded');
    });
}

function doCollapse(elt) {
    var expandable = findExpandableContent(elt);
    //Before collapsing, check if the collapse child has any expandableContent children.
    //If it does, those divs need to be collapsed and not the parent.
    if (expandable.find('.collapse').children('.expandableContent').length > 0) {
        expandable =  expandable.find('.collapse').children('.expandableContent');
    }
    expandable.find('.collapse').slideUp(function () {
        expandable.find('.expand').removeClass('expanded');
    });
}

function doToggle(elt) {
    var expandable = findExpandableContent(elt);
    expandable.children('.collapse').slideToggle(function () {
        expandable.children('.expand').toggleClass('expanded');
    });
}

function doExpandParent(elt) {
    var expandable = findExpandableContent(elt);
    var expandableParent = expandable.parent().siblings('.expand');
    if (expandableParent.length > 0) {
        if (!expandableParent.hasClass('expanded')) {
            doToggle(expandableParent);
        }
    }
}

// ===================================================

// Copyright 2002-2012 The MathWorks, Inc.