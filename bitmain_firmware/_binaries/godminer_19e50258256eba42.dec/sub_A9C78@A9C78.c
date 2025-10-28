int __fastcall sub_A9C78(int a1, int *a2, char a3)
{
  size_t v4; // r3
  size_t v5; // r3
  __int64 seed; // [sp+14h] [bp-20h] BYREF
  struct timeval tv; // [sp+1Ch] [bp-18h] BYREF
  size_t v11; // [sp+24h] [bp-10h]
  size_t n; // [sp+28h] [bp-Ch]
  size_t *v13; // [sp+2Ch] [bp-8h]

  v13 = *(size_t **)(a1 + 1132);
  if ( v13 )
  {
    v4 = *v13 - 6;
    if ( v4 >= 4 )
      v4 = 4;
    n = v4;
    v5 = *v13 - v4 - 6;
    if ( v5 >= 4 )
      v5 = 4;
    v11 = v5;
    if ( a3 && *((_BYTE *)a2 + 444) )
    {
      dword_5AD5C4 = 0;
      gettimeofday(&tv, 0);
      LODWORD(seed) = 1000000 * tv.tv_sec + tv.tv_usec;
      seed = (int)seed;
      dword_5AD5C8 = rand_r((unsigned int *)&seed);
    }
    memset(v13 + 1, 0, *v13);
    if ( n )
    {
      memcpy(v13 + 1, &dword_5AD5C4, n);
      ++dword_5AD5C4;
    }
    if ( v11 )
    {
      memcpy((char *)v13 + n + 4, &dword_5AD5C8, v11);
      ++dword_5AD5C8;
    }
    memcpy((void *)(a1 + 40), (const void *)a2[20], a2[19]);
    memcpy((void *)(a1 + 8 + a2[19] + 32), v13 + 1, *v13);
    memcpy((void *)(a1 + 1032), a2 + 372, 0x20u);
    *(_QWORD *)a1 = *a2;
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
