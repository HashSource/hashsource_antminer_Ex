int __fastcall sub_1E6FB4(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r4
  _DWORD *v5; // r0

  v1 = sub_16F67C(a1);
  v2 = ((int (__fastcall *)(int))loc_1E2798)(v1);
  v3 = dword_488C94;
  if ( !dword_48A590 )
  {
    if ( !*(_DWORD *)(dword_488C94 + 8) )
      goto LABEL_3;
    return sub_258B94(v2);
  }
  v5 = (_DWORD *)sub_242FF0(v2);
  v2 = sub_2594D8(*v5, "remote_pass_ctrlc called\n");
  if ( *(_DWORD *)(v3 + 8) )
    return sub_258B94(v2);
LABEL_3:
  if ( *(_DWORD *)(v3 + 48) )
    return sub_1E3340(v2);
  else
    return sub_231F34(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
}
