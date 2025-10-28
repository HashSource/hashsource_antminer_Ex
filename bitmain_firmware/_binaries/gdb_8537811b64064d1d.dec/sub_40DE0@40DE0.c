int __fastcall sub_40DE0(sigset_t *a1)
{
  if ( !sigismember(&set, 17) )
    sigaddset(&set, 17);
  return sigprocmask(0, &set, a1);
}
