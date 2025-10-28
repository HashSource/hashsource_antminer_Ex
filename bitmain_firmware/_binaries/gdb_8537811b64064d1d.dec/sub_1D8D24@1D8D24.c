int sub_1D8D24()
{
  int result; // r0

  result = sub_25A3D8(
             "Do you want to auto delete previous execution log entries when record/replay buffer becomes full (record fu"
             "ll stop-at-limit)?");
  if ( !result )
    sub_94708("Process record: stopped by user.");
  dword_46DAC0 = 0;
  return result;
}
