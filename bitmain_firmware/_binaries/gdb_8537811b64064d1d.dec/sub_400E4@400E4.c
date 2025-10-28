int sub_400E4()
{
  int v0; // r0

  if ( off_489A98() )
  {
    v0 = ps_getpid_0(&dword_4878EC);
    if ( !sub_4D230(v0, 3) )
      sub_946D8(
        "Target and debugger are in different PID namespaces; thread lists and other data are likely unreliable.  Connect"
        " to gdbserver inside the container.");
  }
  return sub_3FD3C();
}
