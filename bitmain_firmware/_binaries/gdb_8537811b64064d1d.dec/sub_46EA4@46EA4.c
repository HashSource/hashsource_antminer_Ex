int __fastcall sub_46EA4(sigset_t *a1)
{
  sigemptyset(a1);
  sigaddset(a1, 32);
  return sigaddset(a1, 33);
}
