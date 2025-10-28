int __fastcall sub_1EA948(int a1)
{
  int v1; // r0
  const char **v2; // r4
  int v3; // r0
  const char *v4; // r4
  int result; // r0

  v1 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v1);
  v2 = (const char **)dword_488C94;
  v3 = sub_1E7E14("QTStart");
  sub_1E9910(v3);
  v4 = *v2;
  if ( !*v4 )
    sub_94708("Target does not support this command.");
  result = strcmp(v4, "OK");
  if ( result )
    sub_94708("Bogus reply from target: %s", v4);
  return result;
}
