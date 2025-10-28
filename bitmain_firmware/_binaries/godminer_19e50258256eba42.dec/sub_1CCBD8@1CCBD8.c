int __fastcall sub_1CCBD8(int a1, char a2, int a3, unsigned int *a4, _DWORD *a5, signed int a6)
{
  signed int v6; // r3
  unsigned int *v7; // r4
  int v13; // [sp+24h] [bp-30h] BYREF
  _DWORD v14[2]; // [sp+28h] [bp-2Ch] BYREF
  int v15; // [sp+30h] [bp-24h]
  int v16; // [sp+34h] [bp-20h]
  void *ptr; // [sp+38h] [bp-1Ch]
  size_t nmemb; // [sp+3Ch] [bp-18h]
  signed int j; // [sp+40h] [bp-14h]
  int i; // [sp+44h] [bp-10h]

  v14[0] = 0;
  v14[1] = 0;
  v15 = 0;
  v16 = 0;
  v6 = *(_DWORD *)(a1 + 372);
  if ( a6 < v6 )
    v6 = a6;
  nmemb = v6;
  ptr = calloc(v6, 0xCu);
  LOBYTE(v15) = a2;
  BYTE1(v15) = a3;
  HIWORD(v15) = 108;
  (*(void (__fastcall **)(int, _DWORD *, size_t, void *, int *))(a1 + 316))(a1, v14, nmemb, ptr, &v13);
  if ( a2 )
  {
    for ( i = 0; i < v13; ++i )
    {
      for ( j = 0; j < (int)nmemb; ++j )
      {
        if ( *((unsigned __int8 *)ptr + 12 * i + 4) == *(unsigned __int8 *)(*(_DWORD *)(a1 + 528) + j) )
        {
          a4[j] = *((_DWORD *)ptr + 3 * i);
          v7 = &a4[j];
          *v7 = sub_1C65C0(*(_DWORD *)ptr);
          a5[j] = 1;
          break;
        }
      }
    }
  }
  else if ( v13 == 1 && a3 == *((unsigned __int8 *)ptr + 4) )
  {
    *a4 = *(_DWORD *)ptr;
    *a4 = sub_1C65C0(*(_DWORD *)ptr);
    *a5 = 1;
  }
  free(ptr);
  return v13;
}
