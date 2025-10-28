int __fastcall sub_A12FC(int a1, int *a2)
{
  int v2; // r2
  __int64 seed; // [sp+10h] [bp-24h] BYREF
  struct timeval tv; // [sp+18h] [bp-1Ch] BYREF
  int v6; // [sp+20h] [bp-14h]
  int v7; // [sp+24h] [bp-10h]
  int v8; // [sp+28h] [bp-Ch]
  int v9; // [sp+2Ch] [bp-8h]

  v9 = 0;
  v8 = 0;
  v7 = *(_DWORD *)(a1 + 1132);
  *(_QWORD *)a1 = *a2;
  gettimeofday(&tv, 0);
  LODWORD(seed) = 1000000 * tv.tv_sec + tv.tv_usec;
  seed = (int)seed;
  v6 = rand_r((unsigned int *)&seed);
  v2 = dword_5AD33C++;
  if ( (v2 & 0xFFFFFFF) == 0xFFFFFFF )
    dword_5AD33C = 0;
  dword_5AD33C = v6 & 0xFFFFFFF;
  return 0;
}
