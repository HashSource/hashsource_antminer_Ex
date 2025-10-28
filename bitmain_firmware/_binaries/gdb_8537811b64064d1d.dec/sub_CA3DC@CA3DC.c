int __fastcall sub_CA3DC(int a1)
{
  _DWORD *v1; // r3
  int v2; // r5
  int v4; // r2
  _DWORD *v5; // r3
  unsigned int v6; // r2
  int v8; // r0
  int v9; // r3
  int v10; // r6
  const char *v11; // r0
  int v12; // r0
  int v13; // r6
  const char *v14; // r0

  v1 = *(_DWORD **)(a1 + 16);
  if ( v1 )
  {
    if ( v1[4] == 1 && v1[5] != 1 )
    {
      if ( *(_BYTE *)(a1 + 38) )
      {
        if ( !*(_BYTE *)(a1 + 37) && !*(_BYTE *)(a1 + 41) )
        {
          v4 = v1[6];
          v5 = *(_DWORD **)(a1 + 48);
          if ( v4 <= 0 || !v5[6] )
          {
            v2 = v5[7];
            if ( !v2 )
            {
              v6 = *(_DWORD *)(a1 + 12);
              if ( v6 <= 1 )
              {
                v8 = sub_187B1C(v5[5], *(_DWORD *)(a1 + 52));
                if ( v8 )
                {
                  v9 = *(_DWORD *)(a1 + 16);
                  if ( *(_DWORD *)(v9 + 12) != 3 || (v8 = sub_187B50(*(_DWORD *)(v9 + 112))) == 0 )
                  {
                    if ( dword_487930 )
                    {
                      v10 = *(_DWORD *)sub_242FF0(v8);
                      v11 = (const char *)sub_25ACB4(*(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 52));
                      sub_2594D8(v10, "infrun: skipping breakpoint: stepping past insn at: %s\n", v11);
                      return v2;
                    }
                    return 0;
                  }
                }
                v6 = *(_DWORD *)(a1 + 12);
              }
              if ( v6 != 2 )
                return 1;
              v12 = sub_187B74();
              if ( !v12 )
                return 1;
              if ( dword_487930 )
              {
                v13 = *(_DWORD *)sub_242FF0(v12);
                v14 = (const char *)sub_25ACB4(*(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 52));
                sub_2594D8(
                  v13,
                  "infrun: stepping past non-steppable watchpoint. skipping watchpoint at %s:%d\n",
                  v14,
                  *(_DWORD *)(a1 + 56));
                return v2;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
