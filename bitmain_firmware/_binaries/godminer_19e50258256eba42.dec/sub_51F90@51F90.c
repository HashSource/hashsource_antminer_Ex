json_t *__fastcall sub_51F90(int a1, char ***a2)
{
  _BOOL4 v2; // r3
  int v7; // [sp+14h] [bp-18h] BYREF
  size_t v8; // [sp+18h] [bp-14h] BYREF
  char *v9; // [sp+1Ch] [bp-10h]
  _BOOL4 v10; // [sp+20h] [bp-Ch]
  char v11; // [sp+27h] [bp-5h]

  sub_5153C((_DWORD *)a1);
  v11 = *(_BYTE *)(a1 + 36);
  v2 = v11 == 63 || v11 == 42;
  v10 = v2;
  if ( !v2 )
    sub_5172C((_DWORD *)a1);
  v9 = sub_51808(a1, a2, "string", &v8, &v7, v10);
  if ( v9 )
  {
    if ( *(_DWORD *)(a1 + 76) )
    {
      return 0;
    }
    else if ( v7 )
    {
      return jsonp_stringn_nocheck_own(v9, v8);
    }
    else
    {
      return (json_t *)json_stringn_nocheck(v9, v8);
    }
  }
  else if ( v11 != 63 || *(_DWORD *)(a1 + 76) )
  {
    return 0;
  }
  else
  {
    return (json_t *)json_null();
  }
}
