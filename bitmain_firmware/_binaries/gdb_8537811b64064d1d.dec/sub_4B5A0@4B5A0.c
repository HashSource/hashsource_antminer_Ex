int sub_4B5A0()
{
  sub_4A2FC();
  sub_539E8("checkpoint", 10, sub_4AA4C, "Fork a duplicate process (experimental).");
  sub_539E8(
    "restart",
    10,
    sub_4ACA0,
    "restart <n>: restore program context from a checkpoint.\n"
    "Argument 'n' is checkpoint ID, as displayed by 'info checkpoints'.");
  sub_5329C("checkpoint", 10, sub_4ADD0, "Delete a checkpoint (experimental).", &unk_4747A0);
  sub_5329C("checkpoint", 10, sub_4A6A0, "Detach from a checkpoint (experimental).", &unk_47479C);
  return sub_539B4("checkpoints", sub_4A3F4, "IDs of currently known checkpoints.");
}
