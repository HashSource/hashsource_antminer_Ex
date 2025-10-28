int __fastcall sub_4F470(int a1)
{
  int v1; // r0
  _DWORD *v2; // r0
  _BYTE v4[36]; // [sp+0h] [bp-24h] BYREF

  if ( !a1 )
    sub_94708("REGEXP string is empty");
  v1 = sub_1636E0(v4, a1, 2, "Error in regular expression");
  v2 = (_DWORD *)sub_242FB4(v1);
  sub_53CF8(*v2, dword_474744, v4, "");
  return sub_163764(v4);
}
