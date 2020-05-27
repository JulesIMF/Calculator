//Hash.cpp is coding source code file for application "Coder", which include functions of five steps of coding.
//Last edit was 01 December, 2014 year.
//InterMasterFly`s app.

#define _ANN 4.23761731812
#define _LIB 5.73737
#define _JOKE 762.8281271881
#define _REP 887.646457
#
long double code_1(long double Hash)
{
	Hash = Hash * Hash;
	long double i = 763.7622, k = 78.0;
	Hash -= ((i*k) / (i - k));
	Hash += _ANN;
	return Hash;
}

long double code_2(long double Hash)
{
	Hash = Hash + _JOKE * _ANN;
	Hash += _JOKE;
	Hash -= _ANN;
	Hash += _LIB;
	Hash = Hash + (20 + 32.23);
	Hash = Hash / (_ANN + _LIB);
	Hash += (_ANN + _LIB + _JOKE);
	return Hash;
}

long double code_3(long double Hash)
{
	Hash += (Hash * _REP / _JOKE);
	Hash -= 390.5;
	if (Hash < _REP*(_ANN + _LIB))
		Hash += _JOKE;
	else
	{
		Hash -= (_ANN + _LIB);
		Hash += (_REP / 112);
	}
	return Hash;
}

long double code_4(long double Hash, int nI)
{
	int i;
	Hash += _ANN;
	for (i = 0; i <= nI; i++)
	{
		Hash += nI;
		Hash -= i;
		Hash = Hash * (_REP / _ANN);
	}
	if (nI != 0)
		Hash *= nI;
	else
	{
		Hash *= (Hash / 0.3);
		Hash -= (Hash / 0.2);
	}
	return Hash;
}

long double code_end(long double Hash, int nI, int nQ)
{
	Hash  *= ((nI) / (nQ+1.8954564654) * (Hash *nQ));
	Hash /= (nQ / (nI - Hash));
	Hash -= ((nQ - nI) / (nQ * (nI*Hash)));
	Hash += (nQ / (nI - (Hash + nQ)) + 1);
	return Hash;
}
