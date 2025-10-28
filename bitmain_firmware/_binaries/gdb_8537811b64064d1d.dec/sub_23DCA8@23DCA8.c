int __fastcall sub_23DCA8(int a1)
{
  int v1; // r4
  int v2; // r5
  void *v3; // r0
  int result; // r0

  if ( dword_4878EC == dword_475848 && qword_4878F0 == qword_47584C )
    sub_94708("No thread selected");
  v1 = sub_93634(a1);
  v2 = ((int (*)(void))loc_23DC0C)();
  v3 = *(void **)(v2 + 32);
  if ( v3 )
    free(v3);
  result = v1;
  if ( v1 )
    result = sub_32727C(v1);
  *(_DWORD *)(v2 + 32) = result;
  return result;
}
