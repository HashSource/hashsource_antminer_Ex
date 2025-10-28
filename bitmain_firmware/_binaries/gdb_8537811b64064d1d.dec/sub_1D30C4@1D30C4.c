int sub_1D30C4()
{
  int v0; // r4

  v0 = sub_23195C(4);
  if ( !v0 )
    return sub_259F38("No record target is currently active.\n");
  sub_259F38("Active record target: %s\n", *(const char **)(v0 + 4));
  return (*(int (__fastcall **)(int))(v0 + 656))(v0);
}
