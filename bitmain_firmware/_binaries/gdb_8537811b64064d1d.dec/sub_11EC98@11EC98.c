bool __fastcall sub_11EC98(int a1, int a2, _DWORD *a3)
{
  char *v4; // r5
  _BOOL4 result; // r0
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3

  v4 = *(char **)a2;
  result = sub_11EC44(*(char **)a2, (const char **)off_39EDA0);
  if ( result )
  {
    v9 = *(_DWORD *)(a2 + 36);
    *a3 = a2;
    a3[2] = v9;
  }
  else
  {
    result = sub_11EC44(v4, (const char **)off_39ED98);
    if ( result )
    {
      v8 = *(_DWORD *)(a2 + 36);
      a3[5] = a2;
      a3[7] = v8;
    }
    else
    {
      result = sub_11EC44(v4, (const char **)off_39EDD0);
      if ( result )
      {
        v10 = *(_DWORD *)(a2 + 36);
        a3[10] = a2;
        a3[12] = v10;
      }
      else
      {
        result = sub_11EC44(v4, (const char **)off_39EDA8);
        if ( result )
        {
          v11 = *(_DWORD *)(a2 + 36);
          a3[15] = a2;
          a3[17] = v11;
        }
        else
        {
          result = sub_11EC44(v4, (const char **)off_39EDC8);
          if ( result )
          {
            v12 = *(_DWORD *)(a2 + 36);
            a3[20] = a2;
            a3[22] = v12;
          }
          else
          {
            result = sub_11EC44(v4, (const char **)off_39EE10);
            if ( result )
            {
              v13 = *(_DWORD *)(a2 + 36);
              a3[25] = a2;
              a3[27] = v13;
            }
            else
            {
              result = sub_11EC44(v4, (const char **)off_39EE18);
              if ( result )
              {
                v7 = *(_DWORD *)(a2 + 36);
                a3[30] = a2;
                a3[32] = v7;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
