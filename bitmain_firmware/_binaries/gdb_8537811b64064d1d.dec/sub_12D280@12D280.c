_DWORD *__fastcall sub_12D280(_DWORD *result, int (__fastcall *a2)(_DWORD *, void *, int))
{
  _DWORD *v3; // r10
  int v4; // r4
  int v5; // r5
  int v6; // r3
  int v7; // r1
  _DWORD *v8; // r7
  int v9; // r9
  int v10; // r0
  void *v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // [sp+Ch] [bp-18h]
  int v15; // [sp+10h] [bp-14h]
  _DWORD *v16; // [sp+18h] [bp-Ch]

  v16 = result;
  if ( a2 )
  {
    v15 = *(_DWORD *)(dword_4872D8 + 344);
    v14 = sub_323B08(10, off_4714A0, off_47149C[0], 0, sub_930BC, &loc_11C860);
    result = (_DWORD *)sub_323B08(10, off_4714A0, off_47149C[0], 0, sub_930BC, &loc_11C860);
    v3 = result;
    if ( *(int *)(dword_4872D8 + 352) > 0 )
    {
      v4 = 0;
      do
      {
        v5 = ((int (__fastcall *)(int))loc_11E390)(v4);
        result = (_DWORD *)sub_258BFC(v5);
        v6 = *(_DWORD *)(v5 + 24);
        v7 = *(_DWORD *)(v6 + 4);
        *(_BYTE *)(v6 + 8) &= ~1u;
        if ( !v7 )
        {
          result = (_DWORD *)((int (__fastcall *)(int))loc_12CFCC)(v5);
          v8 = result;
          if ( result )
          {
            result = (_DWORD *)sub_323E64(v3, result);
            if ( !result )
            {
              result = (_DWORD *)sub_323E64(v14, v8);
              v9 = (int)result;
              if ( result )
              {
                *(_BYTE *)(*(_DWORD *)(v5 + 24) + 8) |= 1u;
              }
              else
              {
                if ( v8[2] )
                {
                  while ( !a2(v16, *(void **)(v8[3] + 4 * v9), 0) )
                  {
                    if ( dword_489708 || (v10 = sub_3245CC(*(_DWORD *)(v8[3] + 4 * v9)), a2(v16, (void *)v10, 1)) )
                    {
                      v11 = sub_11D0B8(v15, v8, v9);
                      if ( a2(v16, v11, 0) )
                        break;
                    }
                    if ( v8[2] <= (unsigned int)++v9 )
                      goto LABEL_27;
                  }
                  v12 = *(_DWORD *)(v5 + 24);
                  *(_BYTE *)(v12 + 8) |= 1u;
                }
                else
                {
LABEL_27:
                  v12 = *(_DWORD *)(v5 + 24);
                }
                if ( (*(_BYTE *)(v12 + 8) & 1) != 0 )
                  v13 = v14;
                else
                  v13 = (int)v3;
                result = (_DWORD *)sub_324058(v13, v8, 1);
                *result = v8;
              }
            }
          }
        }
        ++v4;
      }
      while ( *(_DWORD *)(dword_4872D8 + 352) > v4 );
    }
    if ( v3 )
      result = (_DWORD *)sub_323BAC(v3);
    if ( v14 )
      return (_DWORD *)sub_323BAC(v14);
  }
  return result;
}
