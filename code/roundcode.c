if(mbox(Prepare,m.ballot > ballot)){
  flag = true;
  m = new Ack(ballot, last, log);
  send(m, primary);
  if(flag 
     && mbox(Ack,m.ballot == ballot,n/2)){
    log = longest_valid_log(ballot);
    log.add(newCommand());
  }
}