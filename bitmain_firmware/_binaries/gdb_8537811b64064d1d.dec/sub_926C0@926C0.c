int __fastcall sub_926C0(int result)
{
  void *v1; // r5

  v1 = (void *)result;
  if ( off_46BBC4 != &unk_36E824 )
    result = sub_94748("common/cleanups.c", 264, "restore_my_cleanups has found a stale cleanup");
  off_46BBC4 = v1;
  return result;
}
