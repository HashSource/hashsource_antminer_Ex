int sub_1580AC()
{
  int v0; // r3
  int (*v1)(void); // r3

  v0 = *(_DWORD *)&(*off_46D45C)[28];
  if ( v0 )
  {
    v1 = *(int (**)(void))(v0 + 44);
    if ( v1 )
      return v1();
  }
  dword_4876CC = 1;
  return sub_1FD5CC(dword_487698);
}
