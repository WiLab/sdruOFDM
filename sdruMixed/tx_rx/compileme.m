function compileme

rx1 = PHYReceive;

[ Response ] = MAC_RX(rx1);

tx1 = PHYTransmit;

tx1.Run('Test');

end

