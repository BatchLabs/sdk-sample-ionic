import { Injectable } from '@angular/core';

declare var batch;

@Injectable({
  providedIn: 'root'
})
export class BatchService {

  constructor() { }
  batchStarter(){
    batch.setConfig({"androidAPIKey":"foobar"});
    batch.start();
    batch.push.registerForRemoteNotifications();
 }
}
