int __fastcall sub_2C0FC(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_2BE6C();
  api();
  *(_DWORD *)(a1 + 4) = 0;
  return 0;
}
