# Copyright (C) 2004-2016 Kevin E. Gilbert, dba Serena Software
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
# Kevin E. Gilbert
# Serena Software
# Box 3076
# Bloomington, IN 47402-3076
#
# gilbert@serenasoft.com

void rdfile(int, int);
void rdpcm(int,int);
void pcmfin(int,int);
void pcmfout(int);
void gettoken(void);
int make_atom(int,float,float,float,char *);
void initialize(void);
void make_bond(int,int,int);
void message_alert(char *, char *);
FILE * fopen_path ( char * , char * , char * ) ;
int mm3_mmxtype(int);
int mmff_mmxtype(int);
void set_atomtype(int,int,int,int,int,int);
int FetchRecord(FILE *, char *);
void zero_data(void);
void read_datafiles(char *);
void read_atomtypes(int);
void get_atomname(int,char *);
void clean_string(char *);
void hdel(int);
