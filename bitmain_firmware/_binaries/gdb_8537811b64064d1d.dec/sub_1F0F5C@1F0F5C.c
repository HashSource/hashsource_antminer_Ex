int __fastcall sub_1F0F5C(const char *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int result; // r0
  int v7; // [sp+4h] [bp-8h] BYREF

  v4 = sub_16F67C((int)a1);
  ((void (__fastcall *)(int))loc_1E2798)(v4);
  if ( !*(_DWORD *)(dword_488C94 + 56) )
    sub_94708("command can only be used with remote target");
  v5 = sub_23195C(2);
  result = sub_1E66F4(v5, 0, a1, &v7);
  if ( result == -1 )
    sub_1E1554(v7);
  if ( a2 )
    return sub_259F38("Successfully deleted file \"%s\".\n", a1);
  return result;
}
