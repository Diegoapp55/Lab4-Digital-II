# Lab4-Digital-II
 Repositorio para las actividades del laboratorio 4 - Litex

## Pasos para compilar, ensamblar y cargar un programa a la Nexys
1. sintetizar el proyecto con ayuda de Vivado usando el comando:
       python3 buildSoCproject.py
2. Cambiar al directorio firmware y compilar el main.c
       cd firmware/
       make clean
       make
3. Regresar al directorio principal del SoCproject y cargar el bitstream a la Nexys:
       cd ..
       python3 load.py
4. Conectarse con la Nexys mediante el firmware:
       litex_term /dev/ttyUSB1 --kernel firmware/firmware.bin

## Como agregar modulos de Verilog o VHDL a Litex

Revisar esto:

"/home/diegoapp55/Documentos/UNAL/Digital-II/Lab-4/Lab4-Digital-II/SoC_project_2022/build/nexys4ddr/software/include/generated/ el csr"
