int *api_flush()
{
  local_work = 0;
  last_getwork = 0;
  new_blocks = 0;
  total_go = 0;
  total_ro = 0;
  dword_194990 = 0;
  *(_QWORD *)&total_stale = 0;
  *(_QWORD *)&dword_1949A0 = 0;
  dbl_194998 = 0.0;
  total_accepted = 0;
  *(_QWORD *)&total_discarded = 0;
  *(_QWORD *)&total_rejected = 0;
  *(_QWORD *)&total_getworks = 0;
  total_diff1 = 0;
  total_diff_accepted = 0.0;
  total_diff_rejected = 0.0;
  total_diff_stale = 0.0;
  return (int *)&total_diff1;
}
