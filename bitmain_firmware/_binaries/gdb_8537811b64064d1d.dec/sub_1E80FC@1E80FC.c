int __fastcall sub_1E80FC(const char *a1)
{
  int v2; // r0
  int v3; // r4

  v2 = sub_16F67C((int)a1);
  ((void (__fastcall *)(int))loc_1E2798)(v2);
  v3 = dword_488C94;
  if ( !*(_DWORD *)(dword_488C94 + 56) )
    sub_94708("command can only be used with remote target");
  if ( !a1 )
    sub_94708("remote-packet command requires packet text as argument");
  sub_259B5C("sending: ");
  sub_1E1B50((int)a1);
  sub_259B5C(&word_356660);
  sub_1E7E14(a1);
  sub_1E4EE0((char **)v3, (size_t *)(v3 + 4), 0, 0, 0);
  sub_259B5C("received: ");
  sub_1E1B50(*(_DWORD *)v3);
  return sub_259B5C(&word_356660);
}
