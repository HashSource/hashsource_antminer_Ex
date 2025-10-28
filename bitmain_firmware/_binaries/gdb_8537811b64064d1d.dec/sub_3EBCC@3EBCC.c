int __fastcall sub_3EBCC(int a1)
{
  int v2; // r4
  int v3; // r0
  int result; // r0

  v2 = sub_231954(a1);
  v3 = ps_getpid_0(&dword_4878EC);
  sub_3E99C(v3);
  result = (*(int (__fastcall **)(int))(v2 + 244))(v2);
  if ( !dword_471BF4 )
    return sub_231C90(a1);
  return result;
}
