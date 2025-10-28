int __fastcall sub_657A0(int a1, int a2, int a3)
{
  int v3; // r5

  if ( a3 )
    sub_94708("-list-target-features should be passed no arguments");
  v3 = *(_DWORD *)sub_243004(a1);
  sub_2578D4(v3, 1);
  if ( dword_474864 && off_489AF8(&dword_4899A0) )
    sub_257610(v3, 0, "async");
  if ( off_489B48(&dword_4899A0) )
    sub_257610(v3, 0, "reverse");
  return sub_257374(v3, 1);
}
