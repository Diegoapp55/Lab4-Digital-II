#!/usr/bin/env python3

import os

#os.system("djtgcfg prog -d Nexys4 -i 0 -f ./build/nexys4/gateware/nexys4.bit")

os.system("djtgcfg prog -d Nexys4DDR -i 0 -f ./build/nexys4ddr/gateware/nexys4ddr.bit")
