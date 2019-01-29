# CanReader
This program allows reading mesages on vehicles equipped with a CAN network. 
It interacts with CAN-> COM adapters in which sent messages are in format <ID, x, x, x, ...>. 
The change of the transmission speed is carried out by sending message "CSR _ [speed]" and it must be supported by the adapter. 
Analogous situation occurs when the transmission line is changed, but the message has format "CLR_ [line]".
