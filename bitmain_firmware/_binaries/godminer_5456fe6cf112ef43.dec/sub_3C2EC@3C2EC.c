int __fastcall sub_3C2EC(int a1, int *a2, int a3)
{
  int v5; // r5
  size_t v6; // r2
  int v8; // lr
  int v9; // r12
  int v10; // r1
  int v11; // lr
  int v12; // r12
  int v13; // r1
  unsigned int v14; // r5
  size_t v15; // r8
  unsigned int v16; // r5
  size_t v17; // r2
  int v18; // r0
  struct timeval v19; // [sp+0h] [bp-14h] BYREF
  unsigned int seed[3]; // [sp+8h] [bp-Ch] BYREF

  v5 = *(_DWORD *)(a1 + 1156);
  if ( a3 && *((_BYTE *)a2 + 436) )
  {
    dword_165EF8 = 0;
    gettimeofday(&v19, 0);
    seed[0] = v19.tv_usec + (_DWORD)&loc_F4240 * v19.tv_sec;
    *(_QWORD *)seed = (int)seed[0];
    v18 = rand_r(seed);
    v6 = *(_DWORD *)(a1 + 1156);
    dword_165EFC = v18;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 1156);
  }
  memset(*(void **)(a1 + 1160), 0, v6);
  if ( v5 != 6 )
  {
    v14 = v5 - 6;
    v15 = v14 >= 4 ? 4 : v14;
    memcpy(*(void **)(a1 + 1160), &dword_165EF8, v15);
    ++dword_165EF8;
    if ( v14 > 4 )
    {
      v16 = v14 - v15;
      if ( v16 >= 4 )
        v17 = 4;
      else
        v17 = v16;
      memcpy((void *)(*(_DWORD *)(a1 + 1160) + v15), &dword_165EFC, v17);
      ++dword_165EFC;
    }
  }
  memcpy((void *)(a1 + 40), (const void *)a2[19], a2[18]);
  memcpy((void *)(a1 + a2[18] + 40), *(const void **)(a1 + 1160), *(_DWORD *)(a1 + 1156));
  v8 = a2[371];
  v9 = a2[372];
  v10 = a2[373];
  *(_DWORD *)(a1 + 1032) = a2[370];
  *(_DWORD *)(a1 + 1036) = v8;
  *(_DWORD *)(a1 + 1040) = v9;
  *(_DWORD *)(a1 + 1044) = v10;
  v11 = a2[375];
  v12 = a2[376];
  v13 = a2[377];
  *(_DWORD *)(a1 + 1048) = a2[374];
  *(_DWORD *)(a1 + 1052) = v11;
  *(_DWORD *)(a1 + 1056) = v12;
  *(_DWORD *)(a1 + 1060) = v13;
  *(_QWORD *)a1 = *a2;
  return 0;
}
