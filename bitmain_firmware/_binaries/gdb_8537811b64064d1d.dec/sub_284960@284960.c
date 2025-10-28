int __fastcall sub_284960(int a1)
{
  int v2; // r4

  fwrite("--More--", 1u, 8u, (FILE *)dword_48AAB0);
  fflush((FILE *)dword_48AAB0);
  v2 = sub_2848BC(1);
  sub_290878(v2);
  if ( !v2 )
    return -1;
  if ( v2 == 2 )
    return a1 - 1;
  return 0;
}
