int __fastcall sub_257418(int a1)
{
  int (*v1)(void); // r2

  v1 = *(int (**)(void))(*(_DWORD *)a1 + 72);
  if ( v1 == sub_F023C )
    return 0;
  else
    return v1();
}
