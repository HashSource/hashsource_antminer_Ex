int __fastcall sub_3BCB8(int a1)
{
  if ( sub_96924(1, 1, 0, a1) < 0 )
    return -1;
  signal(13, (__sighandler_t)1);
  return 0;
}
