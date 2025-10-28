int __fastcall sub_148018(int result)
{
  int v1; // r4
  int v2; // r2
  int v3; // r5
  int v4; // r9
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0

  v1 = *(unsigned __int8 *)(result + 52);
  if ( !*(_BYTE *)(result + 52) )
  {
    v2 = *(_DWORD *)(result + 32);
    v3 = result;
    if ( v2 > 0 )
    {
      do
      {
        v4 = 4 * v1;
        v5 = *(_DWORD *)(*(_DWORD *)(v3 + 28) + 4 * v1++);
        if ( !*(_BYTE *)(v5 + 52) && !*(_DWORD *)(v5 + 24) )
        {
          if ( dword_48A514 )
          {
            v6 = (_DWORD *)sub_242FB4(v5);
            sub_25A6E4(&word_3E1FAC, *v6);
            v7 = sub_259B80("");
            v8 = (_DWORD *)sub_242FB4(v7);
            sub_25A6E4("and ", *v8);
            sub_259B80("");
            sub_259F38("%s...", *(const char **)(*(_DWORD *)(*(_DWORD *)(v3 + 28) + v4) + 4));
            v9 = sub_259B80("");
            v10 = (_DWORD *)sub_242FB4(v9);
            sub_256834(*v10);
          }
          sub_148018();
          v2 = *(_DWORD *)(v3 + 32);
        }
      }
      while ( v2 > v1 );
    }
    result = *(_DWORD *)(v3 + 64);
    if ( result )
    {
      if ( *(_DWORD *)(result + 12) )
        JUMPOUT(0x146C84);
    }
    else
    {
      *(_BYTE *)(v3 + 52) = 1;
    }
  }
  return result;
}
