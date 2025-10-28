int __fastcall update_str_and_flag(__int64 a1, __int64 *a2)
{
  __int64 v2; // kr00_8
  int i; // [sp+48h] [bp-24h]
  _BYTE *v5; // [sp+4Ch] [bp-20h]

  v2 = a1;
  *(_DWORD *)(HIDWORD(a1) + 64) = 0;
  v5 = *(_BYTE **)(HIDWORD(a1) + 68);
  for ( i = 0; i < *(_DWORD *)(v2 + 372); ++i )
  {
    switch ( *(_DWORD *)(*(_DWORD *)(v2 + 568) + 44 * i + 16) )
    {
      case 0:
        ++*(_DWORD *)(HIDWORD(v2) + 64);
        *v5++ = 111;
        break;
      case 1:
        *v5++ = 35;
        a1 = *a2 | 1;
        *a2 = a1;
        break;
      case 2:
        *v5++ = 88;
        a1 = *a2 | 2;
        *a2 = a1;
        break;
      case 3:
        *v5++ = 120;
        a1 = *a2 | 4;
        *a2 = a1;
        break;
      default:
        *v5++ = 42;
        break;
    }
    if ( i && (i & 7) == 0 )
      *v5++ = 32;
  }
  *v5 = 0;
  return a1;
}
