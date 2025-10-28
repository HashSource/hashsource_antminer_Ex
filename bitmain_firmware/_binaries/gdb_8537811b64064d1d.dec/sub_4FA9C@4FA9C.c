int __fastcall sub_4FA9C(int result)
{
  int v1; // r5
  _DWORD *v2; // r4
  int v3; // r4
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r5
  _DWORD *v7; // r0
  int v8; // [sp+Ch] [bp-4h] BYREF

  v1 = result;
  v2 = (_DWORD *)dword_474744;
  if ( result )
  {
    v8 = result;
    v3 = sub_544F0(&v8, dword_474744, "", 0, 1);
    v4 = sub_54CD4(v3);
    if ( !v4 )
      sub_94708("Not a user command.");
    v5 = (_DWORD *)sub_242FB4(v4);
    return sub_58890(v3, "", v1, *v5);
  }
  else if ( dword_474744 )
  {
    do
    {
      result = sub_54CD4(v2);
      if ( result || v2[13] )
      {
        v6 = v2[1];
        v7 = (_DWORD *)sub_242FB4(result);
        result = sub_58890(v2, "", v6, *v7);
      }
      v2 = (_DWORD *)*v2;
    }
    while ( v2 );
  }
  return result;
}
