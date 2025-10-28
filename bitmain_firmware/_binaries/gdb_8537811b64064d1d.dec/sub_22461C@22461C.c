int sub_22461C()
{
  int v0; // r0
  int (*v1)(void); // r3

  v0 = sub_224544(0);
  if ( v0 && (v1 = *(int (**)(void))(v0 + 440)) != 0 )
    return v1();
  else
    return 0;
}
