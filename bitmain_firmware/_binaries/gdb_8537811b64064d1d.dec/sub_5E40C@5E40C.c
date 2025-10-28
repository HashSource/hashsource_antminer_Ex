int __fastcall sub_5E40C(int a1, _DWORD *a2, int a3)
{
  int v3; // r4
  _BOOL4 v4; // r3
  _BOOL4 v5; // r2

  v4 = a3 > 1;
  if ( a3 )
    v5 = a3 > 1;
  else
    v5 = 1;
  if ( v5 )
    sub_94708("-stack-select-frame: Usage: FRAME_SPEC", a2, v5, v4, v3);
  return sub_20F894(*a2, 1, 0, v4);
}
