### The xb2017 unpacker

## Experimental setup

# Location
- At GSI (in front of Cave C)

# Detectors
- Crystal Ball with ~150 NaI and ~12 LaBr scintillators

# Electronics used
- 2 VME crates with RIO4 processors and TRIDI trigger modules
- 12 Struck SIS3316 flash ADC
- 1 Struck SIS3820 clock module

# Readout mode
- Asynchronous Multihit, each channel triggers individually
- Automatic bank switching is used to reduce deadtime

# Crate synchronisation
- Timestamping using Ratatime between XB left and XB right crates

# Event / Hit synchronisation
- Heimtime supplied to channel 0 of every SIS3316

# Clock distribution
- SIS3820 clock signal passed to first ADC in each crate
- SIS3316 front panel bus passes clock to other modules
