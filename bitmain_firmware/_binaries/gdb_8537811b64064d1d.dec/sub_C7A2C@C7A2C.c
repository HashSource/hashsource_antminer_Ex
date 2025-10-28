int __fastcall sub_C7A2C(int a1)
{
  int v1; // r0
  _DWORD *v2; // r0
  int result; // r0

  v1 = (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 44))();
  v2 = (_DWORD *)sub_243004(v1);
  result = sub_257418(*v2);
  if ( !result )
    return sub_259F38((const char *)&word_356660);
  return result;
}
