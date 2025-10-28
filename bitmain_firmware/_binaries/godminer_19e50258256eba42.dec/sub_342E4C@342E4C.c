_DWORD *__fastcall sub_342E4C(_DWORD *a1, int a2, unsigned int a3, _BYTE *a4)
{
  const void *v9[5]; // [sp+1Ch] [bp-28h] BYREF
  char *v10; // [sp+30h] [bp-14h]
  int v11; // [sp+34h] [bp-10h]
  unsigned int v12; // [sp+38h] [bp-Ch]
  unsigned int v13; // [sp+3Ch] [bp-8h]

  sub_3426AC((_DWORD *)a2);
  v13 = *(_DWORD *)(a2 + 8);
  v12 = *(_DWORD *)(a2 + 4);
  v11 = sub_34231C(a2);
  if ( a3 >= v13 )
    a3 = v13;
  if ( a3 > v12 )
  {
    if ( a3 + v11 <= 0x100000 && (v10 = (char *)malloc(a3 + v11)) != 0 )
    {
      sub_34236C(v9, (_DWORD *)a2);
      *(_DWORD *)(a2 + 24) = sub_342D8C(v9[0], (int)v9[1], v9[2], (unsigned int)v9[3], (int)v9[4], v10);
      free(*(void **)(a2 + 12));
      *(_DWORD *)(a2 + 12) = v10;
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 16) = &v10[a3 + v11];
      sub_3426AC((_DWORD *)a2);
      sub_34236C(a1, (_DWORD *)a2);
    }
    else
    {
      *a4 = 0;
      sub_34236C(a1, (_DWORD *)a2);
    }
  }
  else
  {
    sub_34236C(a1, (_DWORD *)a2);
  }
  return a1;
}
