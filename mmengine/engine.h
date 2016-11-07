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

int FetchRecord(FILE *, char *);
void initialize_pcmodel(void);
void mmp22mod(int,int);
void mm32mod(int,int);
void pcmfin(int, int);
void initialize(void);
void mmxsub(int);
void check_numfile(int, char *);
void read_sdf(int,int);
void type(void);
void initialize_gmmx(void);
void read_gmmxinp(void);
void run_gmmx(void);
void parse_control(char *);
void initialize_control(void);
void get_errfile(void);
FILE * fopen_path ( char * , char * , char * ) ;
void pcmfout(int);
void gettoken(void);
void check_str(void);
void find_rings(void);
