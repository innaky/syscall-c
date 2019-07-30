# Generic binaries (utilities and exercises)

Generic binaries and exercises

## **random_string.c**

This source generate random string using three (3) options
_-n_ for numbers
_-s_ for strings
_-m_ for mix (numbers and strings)

```bash
$> cc -std=c99 -Wall random_string.c -o random_str
$> ./random_str -n 30
869422070120542897009958122132
$> ./random_str -s 30
uKDlpMfBsDCIlKjeufXzILVXdGgEgm
$> ./random_str -m 30
bhmra8E8cDCrR7MpyryGNAck4dj1d9
```

* Usage example:

```bash
$> cc random_string.c -o random_string
$> su -

# For include in the users path
root > mv random_string /usr/local/bin

$> DIRNAME=$(random_string -s 28)
$> mkdir $DIRNAME
$> ls
random_string.c zMXwXITVXquwiDCYDJlAyuzTcuWv
```

It's utils for create random directory names, random filenames etc from a bash/python/perl script. 

This version is compatible with BSD systems, GNU/Linux and Windows (thanks @DoodleDude (https://github.com/doodledude) for the verification in this system and  for corrections.)

## Temperature.c

This source print in float (decimal) format, the conversion between ºF to ºC. 

The source take an input a integer number, this number is the upper limit since zero ºF.

```bash
> cc temperature.c -o temperature
> ./temperature
Input the max value of the table: 40
0.00 ºF is -17.78 ºC
10.00 ºF is -12.22 ºC
20.00 ºF is -6.67 ºC
30.00 ºF is -1.11 ºC
40.00 ºF is 4.44 ºC
```

## Author

* Innaky (innaky@protonmail.com)

## Copyright

Copyright (c) 2019 Innaky (innaky@protonmail.com)

## License

Licensed under the GPLv3 License
