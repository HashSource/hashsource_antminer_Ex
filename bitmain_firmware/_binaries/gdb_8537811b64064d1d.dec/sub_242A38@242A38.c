int __fastcall sub_242A38(int a1)
{
  char *v1; // r2

  v1 = "on";
  if ( !*(_DWORD *)(dword_487668 + 28) )
    v1 = "off";
  return sub_25A440(a1, "Editing of command lines as they are typed is %s.\n", v1);
}
