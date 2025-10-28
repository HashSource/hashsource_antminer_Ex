void sub_193720()
{
  _DWORD *v0; // r5
  void *v1; // r1

  if ( !dword_4879DC )
    sub_94708("No JIT reader loaded.");
  sub_15D7A0();
  sub_1836B0();
  sub_1936AC();
  v0 = (_DWORD *)dword_4879DC;
  if ( dword_4879DC )
  {
    (*(void (**)(void))(*(_DWORD *)dword_4879DC + 20))();
    v1 = (void *)v0[1];
    if ( v1 )
      sub_163534((int)(v0 + 1), v1);
    sub_33AC2C(v0);
  }
  dword_4879DC = 0;
}
