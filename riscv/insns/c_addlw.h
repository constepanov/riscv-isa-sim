require_extension('C');
require(insn.mop_first_insn().rvc_rs2() != 0);
MOP_WRITE_RD(MMU.load_int32(MOP_RVC_RS1 + MOP_RVC_RS2 + insn.mop_second_insn().rvc_lw_imm()));