all:	

single:	add_single.scr
	rm -rf add_single.tmp

add_single.scr:	add_single.tmp add_single.head
	cat add_single.head add_single.tmp > $@

add_single.tmp:	add_single.rb
	ruby $< gensec > $@


single_add:	add_single_add.scr
	rm -rf add_single_add.tmp

add_single_add.scr:	add_single_add.tmp add_single.head
	cat add_single.head add_single_add.tmp > $@

add_single_add.tmp:	add_single_add.rb
	ruby $< gensec > $@

comp:	
	ruby fivebit_comp.rb gensec > tmp
	cat fivebit_comp.head tmp > fivebit_comp.scr
	rm tmp

subshi:	sub_shift.scr
	rm -rf sub_shift.tmp

sub_shift.scr:	sub_shift.tmp sub_shift.head
	cat sub_shift.head sub_shift.tmp > $@

sub_shift.tmp:	sub_shift.rb
	ruby $< gensec > $@


aors:	add_or_sub.scr
	rm -rf add_or_sub.tmp

add_or_sub.scr:	add_or_sub.tmp add_or_sub.head
	cat add_or_sub.head add_or_sub.tmp > $@

add_or_sub.tmp:	add_or_sub.rb
	ruby $< gensec > $@



eirs:	exp_inc_right_shift.scr
	rm -rf exp_inc_right_shift.tmp

exp_inc_right_shift.scr:	exp_inc_right_shift.tmp exp_inc_right_shift.head
	cat exp_inc_right_shift.head exp_inc_right_shift.tmp > $@

exp_inc_right_shift.tmp:	exp_inc_right_shift.rb
	ruby $< gensec > $@







distclean:
	rm -rf *~ *scr