using Microsoft.MixedReality.Toolkit.Experimental.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Resettable : MonoBehaviour
{
    public DockPosition dockPosition;

    public IEnumerator Resetter()
    {
        var docker = GetComponent<Dockable>();
        if(docker.CanUndock)
        {
            docker.Undock();
            yield return new WaitUntil(() => docker.CanDock);
        }

        var wireable = GetComponent<Wireable>();
        if (wireable)
        {
            wireable.ResetToHome();
        }
        else
        {
            docker.Dock(dockPosition);
        }
    }
}
