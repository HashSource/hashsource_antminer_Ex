int sub_3D154()
{
  int v0; // r0

  v0 = sub_17FBBC();
  if ( dword_471BA8 )
  {
    sub_94728("fork-child.c", 66, "%s: Assertion `%s' failed.", "void prefork_hook(const char*)", "saved_ui == NULL");
    JUMPOUT(0x3D1BC);
  }
  dword_471BA8 = dword_487668;
  return sub_27E8AC(v0);
}
